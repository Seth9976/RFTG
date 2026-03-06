// 函数名称: sub_549320
// 虚拟地址: 0x549320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_549320(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = data_3079494()
    
    if (result != 0)
        data_3079484(result, arg1)
        data_3079484(result, arg2)
        data_30794fc(result)
        int32_t var_c = 0
        data_30794c8(result, 0x8b82, &var_c)
        
        if (var_c == 1)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
        
        void* var_10 = nullptr
        data_30794c8(result, 0x8b84, &var_10)
        void* ebx_1 = var_10
        
        if (ebx_1 != 0)
            __alloca_probe_16(ebx_1)
            int32_t __saved_edi
            data_30794c4(result, ebx_1, 0, &__saved_edi)
            int32_t* var_20_7 = &__saved_edi
            sub_4c5680("Could not link program:\n%s\n")
        
        data_307949c(result)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
