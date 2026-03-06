// 函数名称: sub_5bf960
// 虚拟地址: 0x5bf960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf960(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint8_t ebx_1 = (arg2 u>> 8).b & 1
    int32_t esi = sx.d(ebx_1)
    int32_t esi_1 = neg.d(esi)
    int32_t result = (sbb.d(esi_1, esi_1, esi != 0) & 0xfffffff0) + 0x2e
    int32_t eax_3
    eax_3.b = ebx_1 == 0
    int32_t eax_5
    int32_t edx
    edx:eax_5 = sx.q(eax_3 * 2 + 0x1a)
    
    if (zip_source_seek(arg1, eax_5, edx, 1) s>= 0)
        int32_t eax_8
        eax_8.b = ebx_1 == 0
        uint32_t eax_10
        int32_t edx_2
        edx_2:eax_10 = sx.q(eax_8 * 2 + 4)
        void var_10
        char* eax_11 = sub_5c0f50(arg1, eax_10, edx_2, &var_10, arg3)
        
        if (eax_11 != 0)
            int32_t ecx_4
            ecx_4.b = ebx_1 == 0
            int32_t i_1 = ecx_4 + 2
            
            if (i_1 s> 0)
                int32_t i
                
                do
                    result += zx.d(sub_5c0cd0(eax_11))
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (sub_5c0c50(eax_11) != 0)
                sub_5c0c20(eax_11)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            zip_error_set(arg3, 0x14, 0)
            sub_5c0c20(eax_11)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
    else
        sub_5bf050(arg3, arg1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
