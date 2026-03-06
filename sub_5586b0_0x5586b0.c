// 函数名称: sub_5586b0
// 虚拟地址: 0x5586b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_5586b0(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 4)
    int32_t* result = *(arg1 + 4)
    
    if (result != 0)
        result = (*(*result + 8))(result)
        *(arg1 + 4) = 0
    
    return result
}
