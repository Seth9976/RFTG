// 函数名称: sub_5aa975
// 虚拟地址: 0x5aa975
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_5aa975(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    
    if (arg2 == 0)
        return 
    
    void* esi_1 = _strlen(arg2) + 1
    char* eax = sub_5a881a(esi_1)
    *(arg1 + 4) = eax
    
    if (eax != 0)
        sub_5b04a4(eax, esi_1, arg2)
        *(arg1 + 8) = 1
}
