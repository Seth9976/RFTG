// 函数名称: sub_4fc450
// 虚拟地址: 0x4fc450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4fc450(void* arg1 @ edi)
{
    // 第一条实际指令: *(arg1 + 0x68) = &data_83f3d3
    *(arg1 + 0x68) = &data_83f3d3
    *(arg1 + 0x160) = &data_83f3d3
    sub_5abfc0(arg1 + 0x160, 0, 0x5c)
    *(arg1 + 0x194) = 0xff000000
    *(arg1 + 0x1a0) = 0xff000000
    *(arg1 + 0x198) = fconvert.s(float.t(1))
    *(arg1 + 0x1a4) = 0xffffffff
    *(arg1 + 0x1b4) = 1
    return arg1
}
