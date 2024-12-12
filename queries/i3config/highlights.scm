(comment) @comment @spell

(identifier) @variable.constant

(number) @number

[
  "ppt"
  "px"
] @string

(mode_name) @string

(quoted_string) @string

[
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  "="
  "or"
] @operator

[
  "on"
  "off"
  "enable"
  "disable"
  "yes"
  "no"
] @boolean

(gaps_option) @constant

[
  "smart_borders"
  "show_marks"
  "tiling_drag"
  "smart_gaps"
  "gaps"
  "focus_on_window_activation"
] @keyword

[
  "modifier"
  "titlebar"
  "swap_modifier"
  "smart"
  "urgent"
  "focus"
  "none"
] @constant.builtin
