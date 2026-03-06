// 函数名称: sub_645560
// 虚拟地址: 0x645560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645560(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = *arg1
    void* ecx = *arg1
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(zx.d(*(ecx + 0xd)))
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(zx.d(*(ecx + 0xc)))
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = sx.q(zx.d(*(ecx + 0xb)))
    int32_t eax_9
    int32_t edx_4
    edx_4:eax_9 = sx.q(zx.d(*(ecx + 0xa)))
    int32_t eax_11
    int32_t edx_5
    edx_5:eax_11 = sx.q(zx.d(*(ecx + 9)))
    int32_t eax_13
    int32_t edx_6
    edx_6:eax_13 = sx.q(zx.d(*(ecx + 8)))
    int32_t eax_15
    int32_t edx_7
    edx_7:eax_15 = sx.q(zx.d(*(ecx + 7)))
    int32_t eax_17
    int32_t edx_8
    edx_8:eax_17 = sx.q(zx.d(*(ecx + 6)))
    return eax_17 | (
        (((((eax_2 << 8 | eax_5) << 8 | eax_7) << 8 | eax_9) << 8 | eax_11) << 8 | eax_13) << 8
        | eax_15) << 8
}
