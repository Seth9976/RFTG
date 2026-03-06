// 函数名称: sub_5305a0
// 虚拟地址: 0x5305a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5305a0(void* arg1 @ esi)
{
    // 第一条实际指令: void* (__fastcall* var_c)(int32_t* arg1) = sub_527340
    void* (__fastcall* var_c)(int32_t* arg1) = sub_527340
    sub_5a7116(arg1 + 0x64, 0x14, 0xff, sub_527330)
    *(arg1 + 0x1460) = &data_83f3d3
    sub_5abfc0(arg1 + 0x1460, 0, 0x5c)
    *(arg1 + 0x1494) = 0xff000000
    *(arg1 + 0x14a0) = 0xff000000
    *(arg1 + 0x1498) = fconvert.s(float.t(1))
    *(arg1 + 0x14a4) = 0xffffffff
    *(arg1 + 0x14b4) = 1
    *(arg1 + 0x14bc) = &data_83f3d3
    *(arg1 + 0x1518) = &data_83f3d3
    *(arg1 + 0x1560) = &data_83f3d3
    *(arg1 + 0x157c) = &data_83f3d3
    *(arg1 + 0x15c4) = &data_83f3d3
    return arg1
}
