// 函数名称: sub_56c550
// 虚拟地址: 0x56c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_56c550(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* edi = *arg1
    
    if (edi == 0)
        return 
    
    sub_5a69bd(&var_8, 0)
    int32_t eax_1 = *(edi + 4)
    
    if (eax_1 != 0 && eax_1 u< 0xffffffff)
        *(edi + 4) = eax_1 - 1
    
    int32_t esi_1 = *(edi + 4)
    int32_t esi_2 = neg.d(esi_1)
    sub_5a69e5(&var_8)
    void* esi_5 = not.d(sbb.d(esi_2, esi_2, esi_1 != 0)) & edi
    
    if (esi_5 != 0)
        (**esi_5)(1)
}
