// 函数名称: sub_403e80
// 虚拟地址: 0x403e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_403e80()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7a40
    *(eax_2 + 0x3188e4) = 0
    *(eax_2 + 0x2c4958) = 0
    *(eax_2 + 0x2c9048) = 0
    void var_2c4
    char* ecx
    int32_t edx
    uint32_t result = sub_403c90(&var_2c4, edx, ecx, &var_2c4)
    void var_16c
    __builtin_memcpy(&var_16c, result, 0x158)
    void* ecx_2 = *(data_27e7a40 + 0x28)
    
    if (ecx_2 != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx_2.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx_2)
                int32_t var_14
                int32_t* var_2d0_1 = &var_14
                int32_t var_2d4_1 = result + 0x3c
                int32_t var_10_1 = 0x158
                int32_t var_c_1 = 0xf4258
                var_14 = 0xfeedface
                void* ecx_3
                int32_t** edx_2
                ecx_3, edx_2 = sub_4c72b0(0xc, edx_1, ecx_2)
                void* var_2d8_1 = &var_16c
                int32_t var_2dc_1 = result + 0x3c
                result = sub_4c72b0(0x158, edx_2, ecx_3)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
