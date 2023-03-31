
<h1>QMK TextFlow</h1>
<p>QMK TextFlow is a powerful feature for QMK-powered keyboards that introduces an advanced text generation system.
  This system allows for runtime definition of control clauses, variables, procedures, and functions using the
  "Compose" key to control keyboard output interactively.</p>

<h2>Features</h2>
<ul>
  <li>Flow control statements such as "if-then", "while-do", and "for-next" loops</li>
  <li>Mathematical functions for arithmetic operations like addition, subtraction, multiplication, and division</li>
  <li>User-defined functions and procedures for advanced macro creation and customization</li>
  <li>String manipulation functions for concatenation, substring extraction, and character replacement</li>
  <li>Date and time functions for retrieving and formatting dates and times</li>
  <li>Real-time data processing, such as filtering, sorting, or reformatting incoming data streams from sensors, logs,
    or other sources</li>
  <li>Intuitive and efficient use of the "Compose" key for entering and exiting the TextFlow interpreter, making it
    easy for users to create and manage their custom macros</li>
</ul>
<h2>How to use</h2>
<ol>
  <li>Install the QMK TextFlow feature on your QMK-powered keyboard by following the standard QMK firmware
    installation process.</li>
  <li>Assign the "Compose" key to a convenient location on your keyboard layout.</li>
  <li>To create or edit a macro, press the "Compose" key to enter the TextFlow interpreter mode.</li>
  <li>Type your macro using the TextFlow syntax, which includes flow control statements, functions, and procedures.
  </li>
  <li>Press the "Compose" key again to exit the TextFlow interpreter mode and save your macro.</li>
  <li>Execute your macro by pressing the corresponding key combination or trigger.</li>
</ol>

<h2>How it works</h2>
<p>QMK TextFlow works by extending the QMK firmware with a built-in interpreter that processes and executes TextFlow
  syntax. This interpreter is activated and deactivated using the "Compose" key, allowing users to create and edit
  macros on-the-fly.</p>
<p>When a user enters a valid TextFlow command sequence, the interpreter translates it into a series of low-level
  keyboard commands that are executed by the QMK firmware. The interpreter also manages variables, functions, and
  procedures, retaining their state across sessions until they are deallocated or the keyboard powers off.</p>
<h2>Why it works that way</h2>
<p>QMK TextFlow was designed to provide an efficient and powerful method for users to create and manipulate macros on
  their QMK-powered keyboards. By integrating a lightweight interpreter into the firmware, users can create complex
  macros without needing to recompile and flash their keyboard firmware each time they make a change.</p>
<p>The use of the "Compose" key to activate and deactivate the interpreter allows users to quickly and easily create
  and edit macros without interrupting their normal keyboard usage. The feature-rich TextFlow syntax enables users to
  build advanced macros that can interact with real-time data, making their keyboards even more versatile and
  powerful.</p>
