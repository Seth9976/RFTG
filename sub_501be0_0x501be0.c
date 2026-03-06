// 函数名称: sub_501be0
// 虚拟地址: 0x501be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_501be0(int32_t* arg1, int32_t* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: void* var_c = *arg1 + arg2
    void* var_c = *arg1 + arg2
    int32_t* edx
    sub_500910(arg3, edx)
    char* eax_3 = *(arg2 + *arg1)
    int32_t* esi_1 = arg1[4]
    
    if (eax_3 != 0)
        int32_t result = sub_519130(eax_3)
        *(esi_1 + arg2) = result
        return result
    
    sub_4c5870("name", &data_83f3d3, "Definition.cpp", 0xc2, "DefinitionSetHashFromName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
