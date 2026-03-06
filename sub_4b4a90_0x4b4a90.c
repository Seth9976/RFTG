// 函数名称: sub_4b4a90
// 虚拟地址: 0x4b4a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b4a90(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        sub_5094d0(arg1, 0, 1)
    
    arg1[7] += 1
    return *arg1
}
