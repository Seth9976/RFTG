// 函数名称: sub_46cf50
// 虚拟地址: 0x46cf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46cf50(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t ecx = __chkstk(0x1018)
    int32_t ecx = __chkstk(0x1018)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    void* eax_3 = sub_46b2b0(ecx)
    int32_t i = 0
    int32_t var_1010[0x3f7]
    
    if (*(eax_3 + 0x550) s> 0)
        void* var_1014_1 = eax_3 + 0x30
        
        do
            int32_t ecx_4 = *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *var_1014_1) + 0x7c)
            var_1014_1 += 4
            var_1010[i] = ecx_4
            i += 1
        while (i s< *(eax_3 + 0x550))
    
    int32_t var_14 = 1
    sub_469e10(arg2, ecx, 0xf, 0, &var_1010, *(eax_3 + 0x550), 0, 0)
    sub_469ff0(ecx)
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return 0
}
