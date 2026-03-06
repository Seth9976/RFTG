// 函数名称: sub_5c7d00
// 虚拟地址: 0x5c7d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5c7d00(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_40 = 0x14
    int32_t var_40 = 0x14
    char* i_1 = arg1
    int32_t esi = 0
    int32_t var_44 = 0
    char var_30[0x14]
    char (* var_48)[0x14] = &var_30
    int32_t ebx = 1
    sub_5cd100()
    int32_t var_4c = 0x14
    int32_t var_50 = 0
    char var_1c[0x18]
    char (* var_54)[0x18] = &var_1c
    sub_5cd100()
    
    if (i_1 != 0)
        char* i
        
        do
            char eax = *i_1
            
            if (eax == 0)
                break
            
            if (eax == 0x3a)
                esi = 0
                ebx = 0
            else if (eax != 0x20)
                if (eax != 0x2c)
                    if (ebx == 0)
                        if (esi u>= 0x14)
                            char (* var_40_4)[0x18] = &var_1c
                            sub_5cce60("Joystick button name too large: %s")
                            return 0xffffffff
                        
                        var_1c[esi] = eax
                    else
                        if (esi u>= 0x14)
                            char (* var_40_3)[0x14] = &var_30
                            sub_5cce60("Button name too large: %s")
                            return 0xffffffff
                        
                        var_30[esi] = eax
                    
                    esi += 1
                else
                    esi = 0
                    ebx = 1
                    sub_5c7bc0(&var_30, &var_1c, arg2)
                    int32_t var_4c_1 = 0x14
                    int32_t var_50_1 = 0
                    char (* var_54_1)[0x14] = &var_30
                    sub_5cd100()
                    int32_t var_58_1 = 0x14
                    int32_t var_5c_1 = 0
                    char (* var_60_1)[0x18] = &var_1c
                    sub_5cd100()
            
            i = i_1
            i_1 = &i_1[1]
        while (i != 0xffffffff)
    
    return sub_5c7bc0(&var_30, &var_1c, arg2)
}
