//
// Created by david-murach on 6/21/25.
//

#ifndef PBUFMANAGER_H
#define PBUFMANAGER_H

#include "rtps/storages/PBufWrapper.h"
#include "rtps/common/types.h"

namespace rtps {
    class PBufManager {
    public:
        virtual ~PBufManager() = default;

        virtual rtps::PBufWrapper getData(Guid_t) = 0;

        virtual bool isInRetransmitMode() const = 0;

        virtual Guid_t getRetransmitGuid() const = 0;
    };

} // namespace rtps

#endif //PBUFMANAGER_H
