// 函数名称: sub_650570
// 虚拟地址: 0x650570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_650570(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t ecx_9 = rol.d(arg1, 0x10)
    int32_t ecx_9 = rol.d(arg1, 0x10)
    int32_t eax_4 = ((ecx_9 u>> 8 ^ ecx_9 << 8) & 0xff00ff) ^ ecx_9 << 8
    int32_t ecx_5 = ((eax_4 u>> 4 ^ eax_4 << 4) & 0xf0f0f0f) ^ eax_4 << 4
    int32_t edx_8 = ((ecx_5 u>> 2 ^ ecx_5 << 2) & 0x33333333) ^ (ecx_5 * 4)
    return ((edx_8 u>> 1 ^ (edx_8 * 2)) & 0x55555555) ^ (edx_8 * 2)
}
