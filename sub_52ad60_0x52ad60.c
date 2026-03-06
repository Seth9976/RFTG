// 函数名称: sub_52ad60
// 虚拟地址: 0x52ad60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_52ad60(int32_t arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t eax_1 = *(sub_530500(arg1, edx) + 4)
    data_30d951c = eax_1
    data_30da520 = eax_1
    void* eax_4 = &(&data_30d9514)[data_315b330 * 0x407]
    data_30da51c = 1
    return sub_5ab990(eax_4, &data_30d9518, 0x1018, arg1)
}
