/**
 * Open Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFileSystemInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFileSystemInfo::OAIFileSystemInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFileSystemInfo::OAIFileSystemInfo() {
    this->initializeModel();
}

OAIFileSystemInfo::~OAIFileSystemInfo() {}

void OAIFileSystemInfo::initializeModel() {

    m_created_date_time_isSet = false;
    m_created_date_time_isValid = false;

    m_last_accessed_date_time_isSet = false;
    m_last_accessed_date_time_isValid = false;

    m_last_modified_date_time_isSet = false;
    m_last_modified_date_time_isValid = false;
}

void OAIFileSystemInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFileSystemInfo::fromJsonObject(QJsonObject json) {

    m_created_date_time_isValid = ::OpenAPI::fromJsonValue(created_date_time, json[QString("createdDateTime")]);
    m_created_date_time_isSet = !json[QString("createdDateTime")].isNull() && m_created_date_time_isValid;

    m_last_accessed_date_time_isValid = ::OpenAPI::fromJsonValue(last_accessed_date_time, json[QString("lastAccessedDateTime")]);
    m_last_accessed_date_time_isSet = !json[QString("lastAccessedDateTime")].isNull() && m_last_accessed_date_time_isValid;

    m_last_modified_date_time_isValid = ::OpenAPI::fromJsonValue(last_modified_date_time, json[QString("lastModifiedDateTime")]);
    m_last_modified_date_time_isSet = !json[QString("lastModifiedDateTime")].isNull() && m_last_modified_date_time_isValid;
}

QString OAIFileSystemInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFileSystemInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(created_date_time));
    }
    if (m_last_accessed_date_time_isSet) {
        obj.insert(QString("lastAccessedDateTime"), ::OpenAPI::toJsonValue(last_accessed_date_time));
    }
    if (m_last_modified_date_time_isSet) {
        obj.insert(QString("lastModifiedDateTime"), ::OpenAPI::toJsonValue(last_modified_date_time));
    }
    return obj;
}

QDateTime OAIFileSystemInfo::getCreatedDateTime() const {
    return created_date_time;
}
void OAIFileSystemInfo::setCreatedDateTime(const QDateTime &created_date_time) {
    this->created_date_time = created_date_time;
    this->m_created_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_created_date_time_Set() const{
    return m_created_date_time_isSet;
}

bool OAIFileSystemInfo::is_created_date_time_Valid() const{
    return m_created_date_time_isValid;
}

QDateTime OAIFileSystemInfo::getLastAccessedDateTime() const {
    return last_accessed_date_time;
}
void OAIFileSystemInfo::setLastAccessedDateTime(const QDateTime &last_accessed_date_time) {
    this->last_accessed_date_time = last_accessed_date_time;
    this->m_last_accessed_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_last_accessed_date_time_Set() const{
    return m_last_accessed_date_time_isSet;
}

bool OAIFileSystemInfo::is_last_accessed_date_time_Valid() const{
    return m_last_accessed_date_time_isValid;
}

QDateTime OAIFileSystemInfo::getLastModifiedDateTime() const {
    return last_modified_date_time;
}
void OAIFileSystemInfo::setLastModifiedDateTime(const QDateTime &last_modified_date_time) {
    this->last_modified_date_time = last_modified_date_time;
    this->m_last_modified_date_time_isSet = true;
}

bool OAIFileSystemInfo::is_last_modified_date_time_Set() const{
    return m_last_modified_date_time_isSet;
}

bool OAIFileSystemInfo::is_last_modified_date_time_Valid() const{
    return m_last_modified_date_time_isValid;
}

bool OAIFileSystemInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_accessed_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_modified_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFileSystemInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
