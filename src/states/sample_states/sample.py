import mc_control


class SampleState(mc_control.fsm.PythonState):
    def configure(self, config):
        pass

    def start(self, ctl):
        print("Hello from start")

    def run(self, ctl):
        return False

    def teardown(self, ctl):
        pass
