// 函数名称: sub_4c8dd0
// 虚拟地址: 0x4c8dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __convention("regparm")sub_4c8dd0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: void* ebx = data_307b5dc
    void* ebx = data_307b5dc
    void* eax = sub_4c92a0(arg1)
    void var_c
    int32_t** result_1
    void* eax_2 = sub_4ce380(arg3, ebx, &var_c, &result_1, arg3)
    int32_t** result_2 = result_1
    int32_t var_20_1 = arg2
    sub_4c7200(eax + 0x3c, sub_4c7510(eax_2, result_2, eax + 0x3c), result_2)
    int32_t* edi_2 = *(eax + 0x40)
    
    if (edi_2 != 0)
        void* esi_2 = *edi_2
        int32_t* var_20_2 = arg3
        sub_4ce2f0(0, *(esi_2 + 0xfde8) + esi_2 + *(esi_2 + 0xfdec), arg3)
        int32_t** result = result_1
        *(esi_2 + 0xfdec) += result
        return result
    
    sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
        "XList<struct NetBuffer *>::GetTail")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
