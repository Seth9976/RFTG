// 函数名称: sub_5dda20
// 虚拟地址: 0x5dda20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dda20(PWSTR arg1, enum ENUM_DISPLAY_SETTINGS_MODE arg2, int32_t* arg3)
{
    // 第一条实际指令: DEVMODEW devMode
    DEVMODEW devMode
    devMode.dmSize = 0xdc
    devMode.dmDriverExtra = 0
    
    if (EnumDisplaySettingsW(arg1, arg2, &devMode) != 0)
        int32_t __saved_esi_1 = 0xdc
        void* eax_3 = sub_5d0ac0()
        
        if (eax_3 != 0)
            __builtin_memcpy(eax_3, &devMode, 0xdc)
            *(eax_3 + 0x48) = 0x7c0000
            uint32_t dmPelsHeight = devMode.dmPelsHeight
            arg3[1] = devMode.dmPelsWidth
            uint32_t dmDisplayFrequency = devMode.dmDisplayFrequency
            *arg3 = 0
            arg3[2] = dmPelsHeight
            arg3[3] = dmDisplayFrequency
            arg3[4] = eax_3
            
            if (arg2 == ENUM_CURRENT_SETTINGS)
                HDC hdc = CreateDCW(arg1, nullptr, nullptr, nullptr)
                
                if (hdc != 0)
                    int32_t var_518_1 = 0x428
                    int32_t var_51c_1 = 0
                    BITMAPINFO lpbmi
                    BITMAPINFO* var_520_1 = &lpbmi
                    sub_5cd100()
                    lpbmi.bmiHeader.biSize = 0x28
                    HBITMAP eax_5 = CreateCompatibleBitmap(hdc, 1, 1)
                    GetDIBits(hdc, eax_5, 0, 1, nullptr, &lpbmi, DIB_RGB_COLORS)
                    GetDIBits(hdc, eax_5, 0, 1, nullptr, &lpbmi, DIB_RGB_COLORS)
                    DeleteObject(eax_5)
                    DeleteDC(hdc)
                    
                    if (lpbmi.bmiHeader.biCompression != 3)
                        uint16_t biBitCount = lpbmi.bmiHeader.biBitCount
                        
                        if (biBitCount == 8)
                            *arg3 = 0x13000801
                            return 1
                        
                        if (biBitCount != 4)
                            return 1
                        
                        *arg3 = 0x12100400
                        return 1
                    
                    int32_t eax_6
                    eax_6.b = lpbmi.bmiColors[0].rgbBlue
                    eax_6:1.b = lpbmi.bmiColors[0].rgbGreen
                    eax_6:2.b = lpbmi.bmiColors[0].rgbRed
                    eax_6:3.b = lpbmi.bmiColors[0].rgbReserved
                    
                    if (eax_6 u> 0xf800)
                        if (eax_6 != 0xff0000)
                            return 1
                        
                        *arg3 = 0x16161804
                        return 1
                    
                    if (eax_6 == 0xf800)
                        *arg3 = 0x15151002
                        return 1
                    
                    if (eax_6 == 0xff)
                        *arg3 = 0x16561804
                        return 1
                    
                    if (eax_6 != 0x7c00)
                        return 1
                    
                    *arg3 = 0x15130f02
                    return 1
            
            if ((devMode.dmFields & 0x40000) == 0 || devMode.dmBitsPerPel - 4 u> 0x1c)
                return 1
            
            switch (devMode.dmBitsPerPel + &jump_table_5ddc24[6])
                case &lookup_table_5ddc40
                    *arg3 = 0x12100400
                    return 1
                case &lookup_table_5ddc40[1], &lookup_table_5ddc40[2], &lookup_table_5ddc40[3], 
                        &lookup_table_5ddc40[5], &lookup_table_5ddc40[6], &lookup_table_5ddc40[7], 
                        &lookup_table_5ddc40[8], &lookup_table_5ddc40[9], &lookup_table_5ddc40[0xa], 
                        &lookup_table_5ddc40[0xd], &lookup_table_5ddc40[0xe], 
                        &lookup_table_5ddc40[0xf], &lookup_table_5ddc40[0x10], 
                        &lookup_table_5ddc40[0x11], &lookup_table_5ddc40[0x12], 
                        &lookup_table_5ddc40[0x13], &lookup_table_5ddc40[0x15], 
                        &lookup_table_5ddc40[0x16], &lookup_table_5ddc40[0x17], 
                        &lookup_table_5ddc40[0x18], &lookup_table_5ddc40[0x19], 
                        &lookup_table_5ddc40[0x1a], &lookup_table_5ddc40[0x1b]
                    return 1
                case &lookup_table_5ddc40[4]
                    *arg3 = 0x13000801
                    return 1
                case &lookup_table_5ddc40[0xb]
                    *arg3 = 0x15130f02
                    return 1
                case &lookup_table_5ddc40[0xc]
                    *arg3 = 0x15151002
                    return 1
                case &lookup_table_5ddc40[0x14]
                    *arg3 = 0x17101803
                    return 1
                case &lookup_table_5ddc40[0x1c]
                    *arg3 = 0x16161804
                    return 1
    
    return 0
}
