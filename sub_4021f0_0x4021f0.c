// 函数名称: sub_4021f0
// 虚拟地址: 0x4021f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4021f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = data_27e7a40
    void* ecx = *(result + 0x28)
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx)
                int32_t var_14
                int32_t* var_18_1 = &var_14
                void* var_1c_1 = result + 0x3c
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0xf426c
                var_14 = 0xfeedface
                result = sub_4c72b0(0xc, edx_1, ecx)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
