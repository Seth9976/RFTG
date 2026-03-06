// 函数名称: sub_56c510
// 虚拟地址: 0x56c510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_56c510(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    sub_5a69bd(&var_8, 0)
    int32_t eax = *(arg1 + 4)
    
    if (eax != 0 && eax u< 0xffffffff)
        *(arg1 + 4) = eax - 1
    
    int32_t esi = *(arg1 + 4)
    int32_t esi_1 = neg.d(esi)
    sub_5a69e5(&var_8)
    return not.d(sbb.d(esi_1, esi_1, esi != 0)) & arg1
}
