// 函数名称: sub_521c10
// 虚拟地址: 0x521c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_521c10(int32_t* arg1, float arg2, float arg3)
{
    // 第一条实际指令: arg1[1] = &data_83f3d3
    arg1[1] = &data_83f3d3
    arg1[2] = fconvert.s(fconvert.t(arg2))
    *arg1 = 5
    arg1[3] = fconvert.s(fconvert.t(arg3))
}
