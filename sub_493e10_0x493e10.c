// 函数名称: sub_493e10
// 虚拟地址: 0x493e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_493e10(int32_t arg1 @ edi, int128_t* arg2, double arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ecx
    int32_t edx
    ecx, edx = __chkstk(0x1edc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    void var_1ed8
    void* esi = &var_1ed8
    int32_t var_1edc = ecx
    int32_t var_14 = sub_48bb40(arg2, esi, edx.b)
    var_14.q = fconvert.d(fconvert.t(arg3))
    void arg_10
    void* var_18 = &arg_10
    int32_t var_22_1 = 0
    int32_t var_1e = 0
    int16_t var_1a = 0
    var_1e = edx
    var_22_1 = entry_ebx
    __builtin_memset(edx, 0xff, 0x18)
    int32_t result
    int80_t st0
    st0, result = sub_493be0(esi)
    int32_t i = 0
    
    if (data_c02204 s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t eax_3 = data_26031c8
            var_14.q = fconvert.d(fconvert.t(*(eax_3 + edi_1 + 0x18)))
            void* var_18_1 = &arg_10
            var_1e = eax_3 + edi_1
            var_22_1 = entry_ebx
            int80_t st0_1
            st0_1, result = sub_493be0(i)
            
            if (result == 0)
                break
            
            i += 1
            edi_1 += 0x20
        while (i s< data_c02204)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
