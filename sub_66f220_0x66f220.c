// 函数名称: sub_66f220
// 虚拟地址: 0x66f220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66f220(void* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = *(arg1 + 0xb8)
    
    if ((result.b & 4) != 0)
        sub_664320(arg1, "zstream already in use (internal error)")
        noreturn
    
    if (result != arg2)
        void* const ebx_1
        int32_t result_1
        
        if (result != 0)
            result_1 = sub_6732a0(arg1 + 0x78)
            ebx_1 = &data_87dee0
            *(arg1 + 0xb8) = 0
        
        if (result != 0 && result_1 != 0)
        label_66f33b:
            void var_48
            int32_t eax_12 = sub_663d40(&var_48, 0x40, 
                sub_663d40(&var_48, 0x40, 0, "zlib failed to initialize compressor ("), ebx_1)
            char* var_60_4
            int32_t var_58_1
            char const* const var_54_2
            
            if (result_1 == 0xfffffffa)
                var_54_2 = ") version error"
            label_66f37a:
                var_58_1 = eax_12
                int32_t var_5c_5 = 0x40
                var_60_4 = &var_48
            else if (result_1 == 0xfffffffc)
                var_54_2 = ") memory error"
                var_58_1 = eax_12
                int32_t var_5c_4 = 0x40
                var_60_4 = &var_48
            else
                if (result_1 != 0xfffffffe)
                    var_54_2 = ") unknown error"
                    goto label_66f37a
                
                var_54_2 = ") stream error"
                var_58_1 = eax_12
                int32_t var_5c_3 = 0x40
                var_60_4 = &var_48
            
            sub_663d40(var_60_4, 0x40, var_58_1, var_54_2)
            sub_664320(arg1, &var_48)
            noreturn
        
        if (arg2 == 1)
            result, arg1 = sub_674f50(arg1 + 0x78, *(arg1 + 0xbc), *(arg1 + 0xc0), *(arg1 + 0xc4), 
                *(arg1 + 0xc8), *(arg1 + 0xcc), "1.2.7", 0x38)
            ebx_1 = "IDAT"
        else
            if (arg2 != 2)
                sub_664320(arg1, "invalid zlib state")
                noreturn
            
            result, arg1 = sub_674f50(arg1 + 0x78, *(arg1 + 0xd0), *(arg1 + 0xd4), *(arg1 + 0xd8), 
                *(arg1 + 0xdc), *(arg1 + 0xe0), "1.2.7", 0x38)
            ebx_1 = "text"
        
        result_1 = result
        
        if (result_1 != 0)
            goto label_66f33b
        
        *(arg1 + 0xb8) = arg2
    
    *(arg1 + 0xb8) |= 4
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
