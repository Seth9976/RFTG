// 函数名称: sub_4c4950
// 虚拟地址: 0x4c4950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c4950(int32_t* arg1 @ esi, char* arg2)
{
    // 第一条实际指令: void arg_8
    void arg_8
    int32_t eax = sub_5a9419(arg2, &arg_8)
    
    if (eax s> 0)
        void* eax_1 = *arg1
        void* const edi_1
        
        if (eax_1 == 0 || *eax_1 == 0)
            edi_1 = nullptr
        else
            eax_1 = sub_4c4060(arg1)
            edi_1 = *(eax_1 + 8)
        
        void** edx_1 = edi_1 + eax
        __vcasan::DumpThisThread(&arg_8, sub_4c4160(eax_1, edx_1, arg1, edx_1, 1), arg2, *arg1 + edi_1, 
            eax + 1, &arg_8)
    
    return arg1
}
