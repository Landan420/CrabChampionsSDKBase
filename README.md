# Crab Champions 0.1 - DX11Base Menu

**DX11Base** is an internal menu and runtime tool for *Crab Champions* built with ImGui and DirectX11. It provides advanced player modifications, combat enhancements, and real-time HUD information.  
**FYI ChatGPT Helped A lot..**
---

## Features

### General
- **Show Player HUD**: Displays runtime player info (location, speed, health, etc.) in console.
- **Unhook DLL**: Safely unload the menu DLL.
- **Dump Offsets**: Output `GWorld`, `LocalPlayers`, and key offsets to console.

### Cheats / Game Modifiers
- **Godmode**: Instantly restores player health to maximum.
- **Enemy ESP**
- **Infinite Ammo**: Ammo count never decreases.
- **No Reload**: Eliminates reload delay for all weapons.
- **No Cooldowns**: Abolishes cooldowns for abilities and melee.
- **No Spread / Zero Recoil**: Eliminates weapon spread and recoil for precision shooting.

### Player Info Overrides

#### Stats
- Override **Rank** (`None` → `Diamond`).
- Override **Level** (1 → 100).
- Override **Keys** (0 → 999).
- Override **Crystals** (0 → 9999).

#### Movement
- **Base Walk Speed** (0 → 3000 units/s).
- **Air Control** (0 → 5).
- **Ground Friction** (0 → 10).
- **Flip Height** (0 → 3000 units).
- **Dash Height** (0 → 3000 units).
- **Max Acceleration** (0 → 5000 units/s²).
- **Dash Cooldown** (0 → 10 s).
- **Player Scale** (0.1 → 5× size).

#### Combat
- **Damage Multiplier** (0 → 10×).
- **Health Multiplier** (0 → 10×).
- **Fire Rate** (0.01 → 10×).
- **Vertical Recoil** (0 → 50).
- **Horizontal Recoil** (0 → 50).
- **Recoil Interp Speed** (0 → 50).
- **Recoil Recovery Speed** (0 → 50).
- **Melee Range** (50 → 2000 units).
- **Melee Damage** (50 → 2000 units).

---

## Implementation Notes

- Uses **ImGui** for GUI and sliders.
- Features **per-frame application** for certain persistent values like player scale.
- Robust **exception handling** prevents crashes when accessing player or weapon objects.
- Works with **local player pointers** (`GWorld` → `UGameInstance` → `LocalPlayers`) for runtime modifications.

---

## 📸 Screenshots

### Main Menu
![Main Menu](https://raw.githubusercontent.com/Landan420/CrabChampionsSDKBase/refs/heads/master/screenshots/image.webp)

### Player Info Overrides - Movement
![Movement Overrides](https://raw.githubusercontent.com/Landan420/CrabChampionsSDKBase/refs/heads/master/screenshots/image1.webp)

### Player Info Overrides - Combat
![Combat Overrides](https://raw.githubusercontent.com/Landan420/CrabChampionsSDKBase/refs/heads/master/screenshots/image2.webp)


---

## Disclaimer

This tool is intended for educational purposes only. Modifying game behavior may be against the game's Terms of Service. Use responsibly and at your own risk.
