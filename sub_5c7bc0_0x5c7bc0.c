// 函数名称: sub_5c7bc0
// 虚拟地址: 0x5c7bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c7bc0(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = sub_5c7b60(arg1)
    int32_t eax_1 = sub_5c7b00(arg1)
    void* var_20 = &arg2[1]
    int32_t eax_4 = sub_5cd570()
    char* eax_5
    eax_5.b = *arg2
    
    if (eax_5.b == 0x61)
        if (eax_4 s>= 0x14)
            int32_t var_18_1 = eax_4
            sub_5cce60("Axis index too large: %d")
            return 0xffffffff
        
        if (eax_1 != 0xffffffff)
            *(arg3 + (eax_1 << 2) + 0x14) = eax_4
            *(arg3 + (eax_4 << 2) + 0x134) = eax_1
            return arg3
        
        if (eax != 0xffffffff)
            *(arg3 + (eax << 2) + 0x80) = eax_4
            *(arg3 + (eax_4 << 2) + 0x224) = eax
            return arg3
    else if (eax_5.b == 0x62)
        if (eax_4 s>= 0x14)
            int32_t var_18_2 = eax_4
            sub_5cce60("Button index too large: %d")
            return 0xffffffff
        
        if (eax != 0xffffffff)
            *(arg3 + (eax << 2) + 0x44) = eax_4
            *(arg3 + (eax_4 << 2) + 0x1d4) = eax
            return arg3
        
        if (eax_1 != 0xffffffff)
            *(arg3 + (eax_1 << 2) + 0x2c) = eax_4
            *(arg3 + (eax_4 << 2) + 0x184) = eax_1
            return arg3
    else if (eax_5.b == 0x68)
        void* var_18_3 = &arg2[1]
        int32_t eax_10 = sub_5cd570()
        void* var_1c_1 = &arg2[3]
        eax_5 = sub_5cd570()
        
        if (eax_10 s>= 4)
            int32_t var_18_4 = eax_4
            sub_5cce60("Hat index too large: %d")
        
        if (eax != 0xffffffff)
            *(arg3 + (eax << 3) + 0xbc) = eax_10
            *(arg3 + (eax << 3) + 0xc0) = eax_5.b
            *(arg3 + ((eax_10 << 4 | eax_5) << 2) + 0x274) = eax
    
    return eax_5
}
