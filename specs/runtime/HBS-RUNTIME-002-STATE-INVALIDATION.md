title: State And Invalidation

rule_001:
  state_owner:
    Runtime

rule_002:
  event_handlers:
    modify_state

rule_003:
  render:
    never_modify_state

rule_004:
  render_condition:
    dirty == true

rule_005:
  invalidate:
    required_after_state_change