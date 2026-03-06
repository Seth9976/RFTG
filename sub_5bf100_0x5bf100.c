// 函数名称: sub_5bf100
// 虚拟地址: 0x5bf100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf100(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = sub_673170(0, nullptr, 0)
    int32_t result = sub_673170(0, nullptr, 0)
    
    if (arg1 == 0)
        return result
    
    return sub_673170(result, *arg1, zx.d(arg1[1].w))
}
