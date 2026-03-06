// 函数名称: sub_68bcfb
// 虚拟地址: 0x68bcfb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68bcfb(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 0x90) = 0xff
    *(arg1 - 0x90) = 0xff
    char ecx
    long double st0
    long double x87_r0
    long double x87_r1
    long double x87_r2
    st0, ecx = fFEXPH(arg1, x87_r0, x87_r1, x87_r2)
    char entry_ebx
    
    if (entry_ebx == 0)
        return sub_688743(ecx, sub_6892a1(arg1)) __tailcall
    
    __fscale(st0 - ExpHypCopyInv(st0), fneg(float.t(1)))
    return sub_688678() __tailcall
}
