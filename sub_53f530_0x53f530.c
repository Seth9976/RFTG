// 函数名称: sub_53f530
// 虚拟地址: 0x53f530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_53f530(char* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    uint8_t edx_1 = (eax u>> 0x10).b
    arg1[2] = edx_1
    uint16_t ecx = eax.w u>> 8
    arg1[1] = ecx.b
    *arg1 = eax.b
    uint32_t result = zx.d(eax.b)
    *arg2 = (zx.d(edx_1) << 8 | zx.d(ecx.b)) << 8 | result
    return result
}
