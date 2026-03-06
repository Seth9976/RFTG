// 函数名称: sub_4b7600
// 虚拟地址: 0x4b7600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_4b7600(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = 0
    int32_t var_c = 0
    void* ecx = *arg1
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx)
                int32_t var_14
                int32_t* var_18_1 = &var_14
                int32_t var_1c_1 = result + 0x3c
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0xf4250
                var_14 = 0xfeedface
                result = sub_4c72b0(0xc, edx_1, ecx)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
