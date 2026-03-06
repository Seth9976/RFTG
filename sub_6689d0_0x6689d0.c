// 函数名称: sub_6689d0
// 虚拟地址: 0x6689d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_6689d0(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before sRGB")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid sRGB after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((eax_2 & 2) != 0)
        sub_664100(arg1, "Out of place sRGB chunk")
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x800) != 0)
        sub_664100(arg1, "Duplicate sRGB chunk")
        int32_t eax_5 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    if (arg3 != 1)
        sub_664100(arg1, "Incorrect sRGB chunk length")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    char var_109
    sub_664410(arg1, &var_109, 1)
    sub_662280(arg1, &var_109, 1)
    int32_t eax_7 = sub_667b40(arg1, 0)
    
    if (eax_7 == 0)
        uint32_t ebx_1 = zx.d(var_109)
        
        if (ebx_1 s>= 4)
            uint32_t eax_8 = sub_664100(arg1, "Unknown sRGB intent")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_8
        
        if (arg2 != 0)
            if ((*(arg2 + 8) & 1) != 0)
                uint32_t eax_9 = *(arg2 + 0x28)
                
                if (eax_9 s< 0xafc8 || eax_9 s> 0xb3b0)
                    void var_108
                    sub_663f40(&var_108, 1, 5, eax_9)
                    sub_664180(arg1, &var_108, 
                        "Ignoring incorrect gAMA value @1 when sRGB is also present")
            
            if ((*(arg2 + 8) & 4) != 0)
                int32_t eax_10 = *(arg2 + 0x80)
                
                if (eax_10 s< 0x763e || eax_10 s> 0x7e0e)
                    sub_664100(arg1, "Ignoring incorrect cHRM value when sRGB is also present")
                else
                    int32_t eax_11 = *(arg2 + 0x84)
                    
                    if (eax_11 s< 0x7c9c || eax_11 s> 0x846c)
                        sub_664100(arg1, "Ignoring incorrect cHRM value when sRGB is also present")
                    else
                        int32_t eax_12 = *(arg2 + 0x88)
                        
                        if (eax_12 s< 0xf618 || eax_12 s> 0xfde8)
                            sub_664100(arg1, "Ignoring incorrect cHRM value when sRGB is also present")
                        else
                            int32_t eax_13 = *(arg2 + 0x8c)
                            
                            if (eax_13 s< 0x7d00 || eax_13 s> 0x84d0)
                                sub_664100(arg1, 
                                    "Ignoring incorrect cHRM value when sRGB is also present")
                            else
                                int32_t eax_14 = *(arg2 + 0x90)
                                
                                if (eax_14 s< 0x7148 || eax_14 s> 0x7918)
                                    sub_664100(arg1, 
                                        "Ignoring incorrect cHRM value when sRGB is also present")
                                else
                                    int32_t eax_15 = *(arg2 + 0x94)
                                    
                                    if (eax_15 s< 0xe678 || eax_15 s> 0xee48)
                                        sub_664100(arg1, 
                                            "Ignoring incorrect cHRM value when sRGB is also present")
                                    else
                                        int32_t eax_16 = *(arg2 + 0x98)
                                        
                                        if (eax_16 s< 0x36b0 || eax_16 s> 0x3e80)
                                            sub_664100(arg1, 
                                                "Ignoring incorrect cHRM value when sRGB is also present")
                                        else
                                            int32_t eax_17 = *(arg2 + 0x9c)
                                            
                                            if (eax_17 s< 0x1388 || eax_17 s> 0x1b58)
                                                sub_664100(arg1, 
                                                    "Ignoring incorrect cHRM value when sRGB is also present")
        
        bool cond:0_1 = arg1[0x252] != 0
        arg1[0x250] = 1
        
        if (not(cond:0_1))
            *(arg1 + 0x254) = 0x5b8a1b38
            arg1[0x252] = 1
        
        eax_7 = sub_664c00(arg1, arg2, ebx_1.b)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
