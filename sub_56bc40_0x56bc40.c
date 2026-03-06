// 函数名称: sub_56bc40
// 虚拟地址: 0x56bc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_56bc40()
{
    // 第一条实际指令: int32_t* edi = data_3079210
    int32_t* edi = data_3079210
    
    if (*edi == 0)
        int32_t eax_1 = sub_4ccd30(0x400)
        int32_t* result = sub_4f43d0()
        edi[1] = eax_1 - 1
        *edi = result
        return result
    
    sub_4c5870("mNodeBuckets == NULL", &data_83f3d3, "c:\ax2010\engine\xMap.h", 0x72, 
        "XMap<enum StructureID,struct EditModeStructure>::SetNumBuckets")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
