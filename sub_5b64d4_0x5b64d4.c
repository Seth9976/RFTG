// 函数名称: sub_5b64d4
// 虚拟地址: 0x5b64d4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b64d4(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    void* eax = *(arg1 + 4)
    
    if (eax != 0 && *(eax + 8) != 0)
        void* ecx_1 = *(arg2 + 4)
        
        if (eax != ecx_1)
            if (sub_5ac040(eax + 8, ecx_1 + 8) != 0 || ((*arg2 & 2) != 0 && (*arg1 & 8) == 0))
                return 0
        else if ((*arg2 & 2) != 0 && (*arg1 & 8) == 0)
            return 0
        
        char eax_3 = (*arg3).b
        
        if ((eax_3 & 1) != 0 && (*arg1 & 1) == 0)
            return 0
        
        if ((eax_3 & 2) != 0 && (*arg1 & 2) == 0)
            return 0
    
    return 1
}
