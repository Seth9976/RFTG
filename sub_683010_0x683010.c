// 函数名称: sub_683010
// 虚拟地址: 0x683010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683010(int32_t* arg1)
{
    // 第一条实际指令: void* esi = arg1[0x73]
    void* esi = arg1[0x73]
    arg1[0x22] = *(esi + 0x10)
    int32_t result = sub_6822b0(*(esi + 0x14), arg1)
    *(esi + 0x1c) = 1
    return result
}
