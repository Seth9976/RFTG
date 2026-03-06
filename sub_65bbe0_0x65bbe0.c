// 函数名称: sub_65bbe0
// 虚拟地址: 0x65bbe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65bbe0(float* arg1)
{
    // 第一条实际指令: int32_t eax = sub_685f40(fconvert.t(*arg1) * fconvert.t(7.3142857551574707) + fconvert.t(1023.5))
    int32_t eax = sub_685f40(fconvert.t(*arg1) * fconvert.t(7.3142857551574707) + fconvert.t(1023.5))
    
    if (eax s> 0x3ff)
        return 0x3ff
    
    int32_t ecx
    ecx.b = eax s< 0
    return eax & (ecx - 1)
}
