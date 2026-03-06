// 函数名称: sub_4ccaa0
// 虚拟地址: 0x4ccaa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ccaa0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        int32_t eax_1 = sub_4ccd30(0x100)
        int32_t* result = sub_4f43d0()
        arg1[1] = eax_1 - 1
        *arg1 = result
        return result
    
    sub_4c5870("mNodeBuckets == NULL", &data_83f3d3, "c:\ax2010\engine\xMap.h", 0x72, 
        "XMap<int,int>::SetNumBuckets")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
