import os
import can
from pydbus import SessionBus
from gi.repository import GLib

CAN_ID = "vcan0"

class dbusService:
    '''
    DBus Service Example
    '''
    dbus = """
    <node>
        <interface name='com.example.dbusService'>
            <method name='vol'>
                <arg type='i' name='distance' direction='out'/>
            </method>
        </interface>
    </node>
    """

    def __init__(self):
        self.can = can.interface.Bus(channel = CAN_ID, bustype = 'socketcan')

    def vol(self) -> int:
        msg = self.can.recv();
        if msg is None:
            return "No message recieved"
        distance = msg.data[2]
        return distance
            

bus = SessionBus()
bus.publish("com.example.dbusService", dbusService())

loop = GLib.MainLoop()
loop.run()
