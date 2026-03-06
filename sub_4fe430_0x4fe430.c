// 函数名称: sub_4fe430
// 虚拟地址: 0x4fe430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4fe430(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *(arg2 + *arg1)
    char* eax = *(arg2 + *arg1)
    void* esi_1 = arg1[4] + arg2
    
    if (eax != 0)
        int32_t result = sub_519130(eax)
        *esi_1 = result
        return result
    
    sub_4c5870("name", &data_83f3d3, "Definition.cpp", 0xc2, "DefinitionSetHashFromName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
