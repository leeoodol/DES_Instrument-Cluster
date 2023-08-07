# Copyright (C) 2022 twyleg
import time
from piracer.vehicles import PiRacerStandard
from pydbus import SessionBus
from gi.repository import GLib

class dbusService:
    '''
    DBus Service Example
    '''
    dbus = """
    <node>
        <interface name='com.example.dbusService'>
            <method name='vol'>
                <arg type='s' name='voltage' direction='out'/>
            </method>
            <method name='cur'>
                <arg type='s' name='current' direction='out'/>
            </method>
        </interface>
    </node>
    """
    def __init__(self):
        piracer = PiRacerStandard()

    def vol(self) -> str:
        piracer = PiRacerStandard()
        voltage = piracer.get_battery_voltage()
        volt = '{0:0>6.3f}'.format(voltage)
        return volt
    def cur(self) -> str:
        return self.current
            

bus = SessionBus()
bus.publish("com.example.dbusService", dbusService())
loop = GLib.MainLoop()
loop.run()
