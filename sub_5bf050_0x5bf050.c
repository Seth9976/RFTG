// 函数名称: sub_5bf050
// 虚拟地址: 0x5bf050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf050(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax_1 = zip_source_error(arg2)
    int32_t* eax_1 = zip_source_error(arg2)
    *arg1 = *eax_1
    int32_t result = eax_1[1]
    arg1[1] = result
    return result
}
