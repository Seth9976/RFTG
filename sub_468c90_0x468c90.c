// 函数名称: sub_468c90
// 虚拟地址: 0x468c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_468c90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* result = arg4
    int32_t var_20 = arg3
    void* ecx = *result
    int32_t var_1c = arg2
    
    if (ecx != 0)
        int32_t** edx = data_27e7bb8
        result = zx.d(ecx.w)
        
        if (result u< edx[1])
            result = &(*edx)[result * 0x13]
            
            if (result[0x12] == ecx)
                int32_t var_18
                int32_t* var_2c_1 = &var_18
                void* var_30_1 = &result[0xf]
                int32_t var_14_1 = 8
                int32_t var_10_1 = 0xf4253
                var_18 = 0xfeedface
                void* ecx_1
                int32_t** edx_1
                ecx_1, edx_1 = sub_4c72b0(0xc, edx, ecx)
                int32_t* var_34_1 = &var_20
                void* var_38_1 = &result[0xf]
                result = sub_4c72b0(8, edx_1, ecx_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
