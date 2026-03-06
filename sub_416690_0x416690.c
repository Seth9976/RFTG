// 函数名称: sub_416690
// 虚拟地址: 0x416690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_416690(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1 * 0x1f8 + data_27e7a40 + 0xad8
    void* edx = arg1 * 0x1f8 + data_27e7a40 + 0xad8
    int32_t ecx_1 = *(edx + 0x140)
    int32_t result = 0
    
    if (ecx_1 s> 0)
        void* esi_1 = edx + 0x30
        
        do
            int32_t edx_1 = *esi_1
            
            if (edx_1 == 2 || edx_1 == 6)
                char* entry_ebx
                *entry_ebx = 1
                *(entry_ebx + 0x10) = arg2
                *(entry_ebx + 0xc) = arg1
                return result
            
            result += 1
            esi_1 += 0x50
        while (result s< ecx_1)
    
    sub_4c5870("AnyPlayerForfeited(gCClient->gameDescsNetwork[gameIndex])", &data_83f3d3, 
        "..\code\MultiplayerMenu.cpp", 0x43c, "AckForfeitDialogShow")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
