// 函数名称: sub_506400
// 虚拟地址: 0x506400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_506400(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    void* ecx = arg3[1]
    void* edi = arg3[3]
    int32_t var_8_1 = 0
    
    if (ecx s>= edi)
        ecx = edi
    
    char* const ebx_1 = *arg3
    
    if (ebx_1 == 0)
        ebx_1 = &data_83f3d3
    
    if (ecx != neg.d(ebx_1))
        *arg1 = &data_83f3d3
        sub_4c4690(arg1, ecx + ebx_1)
        return arg1
    
    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
