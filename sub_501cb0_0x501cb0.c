// 函数名称: sub_501cb0
// 虚拟地址: 0x501cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_501cb0(void* arg1, int32_t* arg2 @ esi, uint32_t arg3)
{
    // 第一条实际指令: *(arg1 + 0xc) = arg2
    *(arg1 + 0xc) = arg2
    void* eax = arg2[3]
    int32_t ebx = *(eax + 0x10)
    int32_t eax_1
    int32_t* ecx
    eax_1, ecx = sub_4fe230(eax)
    
    if (eax_1.b != 0)
        void* eax_2 = arg2[3]
        return sub_500cb0(eax_2, arg2, *arg2 + arg3, eax_2, arg1)
    
    void* edx
    
    switch (ebx)
        case 5
            void* var_14_1 = arg1
            return sub_5012d0(eax_1, arg3, ecx, arg2)
        case 0xb
            return sub_501c40(arg2, arg3)
        case 0xc
            void* var_14_4 = arg1
            return sub_501be0(arg2, arg3, edx)
        case 0x11
            return sub_501060(eax_1, edx, arg1, arg3, arg2)
        case 0x13
            *arg2
            return sub_501b20(*(arg1 + 8), edx, arg2)
        case 0x14
            return sub_501970(arg3, *arg2 + arg3, arg2, *(arg1 + 8))
    
    int32_t* ecx_8 = arg2[3]
    
    if (sub_4fe210(ecx_8) == 0)
        return sub_501f80(*arg2 + arg3, ecx_8, *(arg1 + 8), 0)
    
    sub_4c5870("!DefTypeIsBuiltIn(pField->pDefMap)", &data_83f3d3, "DefParseTree.cpp", 0x3de, 
        "DefParseReadFieldType")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
