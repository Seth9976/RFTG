// 函数名称: sub_5703e0
// 虚拟地址: 0x5703e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5703e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_26a7764 == 0)
        __builtin_memcpy(arg1, 
            "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x18)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg1
    
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_50c140(data_26a6760)
    int32_t ebx = eax_3
    int32_t var_68 = ebx
    int32_t eax_6 = 1
    float var_60[0xa]
    void var_38
    __builtin_memcpy(&var_60, sub_50c2d0(&var_38, edx, data_26a6764 * 0xb8 + *ebx, &var_38, 0x8823c8), 
        0x28)
    int32_t var_64 = 1
    
    if (data_26a7764 s> 1)
        while (true)
            void var_90
            int32_t eax_7
            int32_t edx_2
            eax_7, edx_2 =
                sub_50c2d0(eax_6, &var_90, (&data_26a6764)[var_64] * 0xb8 + *ebx, &var_90, 0x8823c8)
            __builtin_memcpy(&var_38, eax_7, 0x28)
            eax_6 = var_64 + 1
            __builtin_memcpy(&var_60, sub_570080(&var_90, edx_2, &var_60, &var_90), 0x28)
            var_64 = eax_6
            
            if (eax_6 s>= data_26a7764)
                break
            
            ebx = var_68
    
    void var_28
    int32_t* eax_11 = sub_54cdc0(&var_60, &var_28)
    *arg1 = *eax_11
    arg1[1] = eax_11[1]
    arg1[2] = eax_11[2]
    arg1[3] = eax_11[3]
    int32_t eax_12 = eax_11[5]
    arg1[4] = eax_11[4]
    arg1[5] = eax_12
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
