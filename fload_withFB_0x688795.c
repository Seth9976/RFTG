// 函数名称: __fload_withFB
// 虚拟地址: 0x688795
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __fastcall__fload_withFB(int32_t arg1, double* arg2)
{
    // 第一条实际指令: if ((*(arg2 + 4) & 0x7ff00000) != 0x7ff00000)
    if ((*(arg2 + 4) & 0x7ff00000) != 0x7ff00000)
        return fconvert.t(*arg2)
    
    int32_t var_4 = *(arg2 + 4) | 0x7fff0000
    int32_t ecx = *arg2
    int32_t var_6 = *(arg2 + 4) << 0xb | ecx u>> 0xffffffeb
    *(arg2 + 4)
    return (ecx << 0xb).t
}
