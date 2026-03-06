// 函数名称: sub_424c30
// 虚拟地址: 0x424c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_424c30(void* arg1)
{
    // 第一条实际指令: data_c020d0 -= 1
    data_c020d0 -= 1
    
    if (*(arg1 + 0x38) != 0)
        data_c020d4 += 1
    
    return 1
}
