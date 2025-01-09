import tkinter as tk

def on_button_click():
    label.config(text="Button Clicked!")

# Create the main window
root = tk.Tk()
root.title("Basic Tkinter Design")

# Create a label widget
label = tk.Label(root, text="Hello, Tkinter!", font=("Helvetica", 16))
label.pack(pady=20)

# Create a button widget
button = tk.Button(root, text="Click Me", command=on_button_click)
button.pack(pady=10)

# Run the main event loop
root.mainloop()
