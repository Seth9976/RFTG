// 函数名称: sub_59b8b0
// 虚拟地址: 0x59b8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_59b8b0(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t eax_2 = (arg1 u>> 1 & 0x55555555) + (arg1 & 0x55555555)
    int32_t eax_2 = (arg1 u>> 1 & 0x55555555) + (arg1 & 0x55555555)
    int32_t edx_3 = (eax_2 u>> 2 & 0x33333333) + (eax_2 & 0x33333333)
    int32_t ecx_4 = ((edx_3 u>> 4) + edx_3) & 0xf0f0f0f
    int32_t ecx_5 = ecx_4 + (ecx_4 u>> 8)
    return zx.d((ecx_5 u>> 0x10).b + ecx_5.b)
}
