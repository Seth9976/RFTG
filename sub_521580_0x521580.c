// 函数名称: sub_521580
// 虚拟地址: 0x521580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_521580(void* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    
    if (*(sub_531280(eax, edx, &data_8c00ec) + 0x10) == 0xf)
        return *(arg1 + 4)
    
    sub_4c5870("AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
        "UI2.cpp", 0x2a2, "AttribAsAssetPtr")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
